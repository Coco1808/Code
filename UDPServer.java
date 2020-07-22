package udp2;

import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.SocketException;

public class UDPServer {
    public static void main(String[] args) {
        try {
            DatagramSocket ds=null;
            DatagramPacket dpReceive=null;
            int port=53;
            ds=new DatagramSocket(port);
            System.out.println("UDP服务器已启动。。。");
            // 准备一个byte[]缓冲区
            byte[] b=new byte[1024];
            while(ds.isClosed()==false)
            {
                dpReceive=new DatagramPacket(b, b.length);
                try
                {
                    ds.receive(dpReceive);
                    byte[] Data=dpReceive.getData();
                    int len=Data.length;
                    System.out.println("内容：" + new String(Data, 0, len).trim());
                    System.out.println("IP：" + dpReceive.getAddress());
                    System.out.println("端口：" + dpReceive.getPort());
                    System.out.println("   ");
                    System.out.println("   ");
                }
                catch(IOException e)
                {
                    e.printStackTrace();
                }
            }

        }catch (SocketException e1)
        {
            // TODO 自动生成的 catch 块
            e1.printStackTrace();
        }

    }
}
