import java.util.* ;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in) ;
		String nums = scan.nextLine() ;
		int   cntNum = Integer.parseInt(nums.split(" ")[0]) ;
		int   maxNum = Integer.parseInt(nums.split(" ")[1]) ;
		int[] cmpArr = new int[cntNum] ;
		int   cmpNum = 0 ;
		int   calCnt = 0 ;
		
		for(int i=0; i<cntNum; i++) {
			cmpArr[i] = scan.nextInt() ;
			scan.nextLine() ;
		}
		
		for(int i=(cntNum-1); i>=0; i--) {
			if(maxNum>=cmpArr[i]) {
				cmpNum = i ;
				maxNum = maxNum - cmpArr[cmpNum] ;
				calCnt++ ;
				i++ ;
			} if(maxNum == 0) break ;
		}
		
		System.out.println(calCnt) ;
    }
}
