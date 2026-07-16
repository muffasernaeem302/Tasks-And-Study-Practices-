public class LabDemo
{	
      public static void main(String[]args)
{

//CONSTRUCTORS :



Lab lab1 = new Lab("COMSATS","COMPUTER SCIENCE","A","OOP LAB",30,10,new Date(11,3,2026));

Lab lab2 = new Lab("UCP","COMPUTER SCIENCE","B","PROGRAMMING LAB",40,10,new Date(10,3,2026));

Lab lab3 = new Lab("NUST","COMPUTER SCIENCE","C","PROGRAMMING LAB",20,05,new Date(13,3,2026));

//Copy ONE :

Lab lab4 = new Lab(lab2);

//bookingoperation:

lab1.bookComputers(5);
//System.out.println("Booked 5 Computers in LAB1 .");

// CANCELLLATION :

lab1.cancelBooking(2);
System.out.println("Cancelled 2 Bookings in Lab1.");

// AVAILABLEcOMPUTERS :

System.out.println("Available Computers in Labs : "+lab1.availableComputers());

//EQUALATION :

if(lab2.equals(lab3))
{
	System.out.println("lab2 and lab3 are Equal.");
}
else
{
	System.out.println("Lab2 And Lab3 are not Equal .");
}

//PRINTING DATA :
System.out.println("=".repeat(60));
System.out.println("                   Lab Details                ");
System.out.println("=".repeat(60));

System.out.println("                   LAB 01                     ");
System.out.println(lab1);
System.out.println("=".repeat(60));

System.out.println("                   LAB 02                     ");
System.out.println(lab2);
System.out.println("=".repeat(60));

System.out.println("                   LAB 03                     ");
System.out.println(lab3);

System.out.println("=".repeat(60));

//TOTAL NUMBERS :

System.out.println("\nTotal Labs Created : " +Lab.getTotalLabs());


}
}







