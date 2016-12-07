using System;

public class SortProblem
{
  public static void Main()
  {
    Sort();
  }

  public static void Sort()
  {
    var a = new [] 
    {
      10, 10, 5, 2, 2, 5, 6, 7, 8, 15, 4, 4, 4, 2, 3, 5, 5, 36, 32, 623, 7, 475, 7, 2, 2, 44, 5, 6, 7, 71, 2
    };
    int i = 0;
    
    int max;
    int j = 0;
    int index;
    int buf;
      
    for(i = 0; i < (a.Length - 1); i++)
    {
        max = a[i];
        index = i;
        
        
        for(j = i + 1; j < a.Length - 1; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
                index = j;
            }
        }
        Console.Write(index + " ");
        
        
        buf = a[i];
        a[i] = max;
        a[index] = buf;
    }
      Console.Write(j);
      Console.WriteLine();

      
    for(i = 0; i < a.Length; i++)
        Console.Write(a[i] + " ");
   
  }
}
