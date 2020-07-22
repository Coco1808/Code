package udp2;

import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDPClient {
    public static void main(String[] args) {
        try {
            DatagramSocket datagramSocket=null;
            DatagramPacket dpSend=null;
            InetAddress ia=InetAddress.getByName("127.0.0.1");
            int port=53;
            datagramSocket=new DatagramSocket();
            for(int i=0;i<5;i++)
            {
                byte[] data=("UDP客户端序号："+i).getBytes();
                dpSend=new DatagramPacket(data,data.length,ia,port);
                datagramSocket.send(dpSend);
                Thread.sleep(1000);
            }
            datagramSocket.close();
        }catch (IOException | InterruptedException e)
        {
            // TODO 自动生成的 catch 块
            e.printStackTrace();
        }

    }

}
