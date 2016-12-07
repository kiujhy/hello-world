using System;

public class MatrixMult
{
  public static void Main()
  {
    MultiplyMatrix();
  }

  public static void MultiplyMatrix()
  {
    var a = new [,]
    {
      {5, 10, 13, -4, 10},
      {20, 2, 9, 9, -1},
      {5, 10, 4, 8, 14},
      {6, 1, 2, 6, 10},
      {95, 5, 10, 10, 2}
    };
    var b = new [,]
    {
      {5, 10, 8, -4, 62},
      {20, 2, 9, 9, -1},
      {5, 10, 1, 8, 1},
      {6, 1, 2, 6, -5},
      {95, 5, 1, 3, 2}
    };
      
    var c = new int [5, 5];
    int i;
    int j;
      
    int k;
    int p;

    i = 0;
    k = 0;
    j = 0;
    int m = 0;
    
    for(i = 0; i < 5; i++)
    {
        for(p = 0; p < 5; p++)
        {
            while((j < 5) && (k < 5) )
            {
                m = m + a[i,j] * b[k, p];
                j++;
                k++;
            }
            c[i,p] = m;
            m = 0;
            j = 0;
            k = 0;
        }
    }
    for(i = 0; i < 5; i++)
    {
        Console.Write("|");
        for(p = 0; p < 5; p++)
        {
            Console.Write(c[i, p]);
            Console.Write("|");
        }
        Console.WriteLine();
    }
    
  }
}
