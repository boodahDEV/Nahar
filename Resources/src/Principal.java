import java.awt.*;
import java.io.*;
import java.util.*;
import javax.swing.*;


public class Principal extends JFrame{

//	public void carga() {
//		String u_name;
//		Scanner s = new Scanner(System.in);
//		System.out.println("Login:"); u_name = s.next();
//		
//		switch(u_name.trim()) {
//		case "farauz": {
//			System.out.println("U_NAME: "+u_name);
//			break;
//		}//end case
//		
//		case "admin":{
//			System.out.println("U_NAME: "+u_name);
//			
//			
//			break;
//		}//end case
//		
//		default:
//			System.out.println();
//		}//fin switch
//	}//fin carga
	
	
	public static void main(String args[]) {
		Principal p = new Principal();
//		p.carga();
	}//end main
	
	public Principal() {
		JPanel contenedor = new JPanel();
			contenedor = (JPanel) getContentPane();
			contenedor.setLayout(new BorderLayout());
		
		JPanel jpWest = new JPanel();
		jpWest.setLayout(new GridLayout(10,1));
			JLabel jlmonto = new JLabel("Monto inicial:");
			jlmonto.setSize(50, 30);
			jpWest.add(jlmonto);
			
			JTextField jtfmontoinit = new JTextField(); // lee un double
			jtfmontoinit.setSize(50,30);
			jpWest.add(jtfmontoinit);
			
		contenedor.add(jpWest, BorderLayout.WEST);
		
		
		/*VISUALIZACION DE LA GUI EN GENERAL*/
		setTitle("Orome V0.01");
		setSize(300,250);
		setLocationRelativeTo(null);
		setVisible(true);
		/*VISUALIZACION DE LA GUI EN GENERAL*/
		
	}//fin entorno
	
	
}//fin clase
