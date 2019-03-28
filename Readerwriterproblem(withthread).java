import java.util.concurrent.Semaphore;
public class ReaderWriter 
{
    static int readcount=0;
    static Semaphore re=new Semaphore(1);
    static Semaphore wrt=new Semaphore(1);
    static class Reader implements Runnable{

        
        public void run() {
           try{
              re.acquire();
              readcount++;
              if(readcount==1)
              {
                  wrt.acquire();
              }
              re.release();
              System.out.println(Thread.currentThread().getName()+" Started Reading");
              Thread.sleep(100);
              System.out.println(Thread.currentThread().getName()+" Finished Reading");
              re.acquire();
              readcount--;
              if(readcount==0)
              {
                  wrt.release();
              }
              re.release();
           }
           catch(Exception e)
           {
               e.printStackTrace();
           }
        }
        
    }
    static class Writer implements Runnable{

       
        public void run() {
            try
            {
           wrt.acquire();
           System.out.println(Thread.currentThread().getName()+" Started Writing");
           Thread.sleep(100);
           System.out.println(Thread.currentThread().getName()+" Finished Writing");
           wrt.release();
            }
            catch(Exception e){
                e.printStackTrace();
            }
           
        }
    }
    public static void main(String...args)
    {
        Reader r=new Reader();
        Writer w=new Writer();
        Thread t1=new Thread(r);
        Thread t2=new Thread(r);
        Thread t3=new Thread(r);
        Thread t4=new Thread(w);
        Thread t5=new Thread(w);
       
        t1.start();
        t1.setName("Reader 1");
        t2.start();
        t2.setName("Reader 2");
        t3.start();
        t3.setName("Reader 3");
        t4.start();
        t4.setName("Writer 1");
        t5.start();
        t5.setName("Writer 2");
       
       
    }
    
}