import java.util.Scanner;
class week{
	public static void main(String args[]){
		Scanner myobj = new Scanner(System.in);
		
		System.out.println("enter the day");
		int day = myobj.nextInt();
		System.out.println("the day is "+day);
		
		switch(day){
			case 1:
				System.out.println("the day is monday");
				break;
			
				
			case 2:
				System.out.println("the day is tuesday");
				break;
			
				
			case 3:
				System.out.println("the day is wednesday");
				break;
			
            case 4:
				System.out.println("the day is thursday");
				break;
			

            case 5:
				System.out.println("the day is friday");
				break;
			

            case 6:
				System.out.println("the day is saturday");
				break;
			

            case 7:
				System.out.println("the day is sunday");
				break;
			
		}
	}
}
			
				