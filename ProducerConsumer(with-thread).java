//Producerconsumer problem(withThread)

import java.util.ArrayList;
import java.util.Scanner;
import java.util.List;
import java.util.*;
public class PC
{
 public static void main(String args[])
 {
     ArrayList<Integer>buffer=new ArrayList<Integer>();
    Thread t1=new Thread(new Producer(buffer));
    Thread t2=new Thread(new Cons(buffer));
    t1.start();
    t2.start();
}
}
 class Producer implements Runnable
 {
     ArrayList<Integer>b=null;
     final int limit=10;
     int i=0;
     Producer(ArrayList<Integer>buffer)
     {
         b=buffer;
     }
     public void run()
     {
         while(true)
         {
             try
             {
              i++;
              Producer(i);
             }
             catch(Exception e){
                 
             
         }
     }
 }
 
 public void Producer(int i)throws InterruptedException
{
        synchronized(b)
                
                {
                 while(b.size()==limit)
                 {
                     System.out.println("Prod is waiting for consumer ");
                     b.wait();
                 }
                }
                synchronized(b)
                {
                    b.add(i);
                    System.out.println("Added Item :"+i);
                    Thread.sleep(100);
                    b.notify();
                }
}
}
//----------------------------------------------------------------------
 class Cons implements Runnable
 {
     ArrayList<Integer>b=null;
  
    
     Cons(ArrayList<Integer>buffer)
     {
         b=buffer;
     }
     public void run()
     {
         while(true)
         {
             try
             {
              
              Cons();
             }
             catch(Exception e){
                 
             
         }
     }
 }
 
 public void Cons()throws InterruptedException
{
        synchronized(b)
                
                {
                 while(b.isEmpty())
                 {
                     System.out.println("Buffer is empty ");
                     b.wait();
                 }
                }
                synchronized(b)
                {
                    b.remove(0);
                  System.out.println("consuming  item");
                    Thread.sleep(100);
                    b.notify();
                }
}
  
}
 