using System;

public class SortProblem
{
  public static void Main()
  {
    Sort();
   
  }

  public static void Sort()
  {
    int [] a = {11,86,232,28,8,145,588,1,307,179,77,792,693,678,481,888,574,695,624,866,467,434,907,259,130,37,25,373,214,268,108,672,371,866,863,279,22,233,336,830,374,439,144,234,360,617,244,5,566,847,476,493,56,618,202,576,179,972,898,970,119,214,786,38,71,404,420,827,814,201,865,341,358,794,492,27,290,672,899,512,792,20,807,367,792,615,616,753,663,287,99,49,334,366,711,160,652,105,162,955}; 
     
    Printmas(a);
    Console.WriteLine();
    int start = 0;
    int end = a.Length - 1;
    sort2( a, start, end);
    Printmas(a);
    
  }
    
    public static void sort2(int [] a, int start, int end)
    {
        if(end > start)
        {
            int middle = (start + end) / 2;
            sort2(a, start, middle);
            sort2(a, middle + 1, end);
            merge( a, start, middle, middle+1, end);
        }
    }
    
    public static void merge ( int [] a, int start_1, int end_1, int start_2, int end_2)
    {
        int [] b = new int [a.Length];
        int p = start_1;
        
        for(int k = start_1; k <= end_2; k++)
        {    
            if(start_1 <= end_1 && (start_2 > end_2 || a[start_1] < a[start_2]) )
            {
                b[k] = a[start_1];
                start_1 = start_1 + 1;
            }
            else
            {
                b[k] = a[start_2];
                
                start_2 = start_2 + 1;
            }
        }
        for(int m = p; m <= end_2; m++)
            a[m] = b[m];
        
    }
    
    public static void Printmas(int[] a)
    {
        for(int j = 0; j < a.Length; j++)
            Console.Write(a[j] + " ");
    }
}
