/*
 *  Filename        : howto.c
 *  Description     : Simple program to understand 
 *                    Polyspace Execution model
 */

extern int read_an_input(void);

static exo1_red(void)
{
  int X;

  X = 1 / X;
  X = X + 1;
}

static exo2_grey(void)
{
  int X, Z;
     
  X = read_an_input();
  if (X > 5 && X < 10) {
    if (X < 5) {
      X = X + 1;
      Z = 1 / X;
      X += Z - 1;
    }
  }   
}

static exo3_propagate(void)
{
  int X;
  int Y[100];

  X = read_an_input();
  Y[X] = 0;
  Y[X] = 0;
}

static exo4_explore(void)
{
  int X;

  if (read_an_input())  
    X = 100;
  
  if (X > 101) 
    X = X + 1;
}

static exo5_linear(void)
{
  int X;
  int Y[100];

  X = read_an_input();
  Y[X] = 0; 
  Y[X-1] = (1 / X) + X ;
  if (X == 0) 
    Y[X] = 1;
}

int main(void) 
{

  if (read_an_input()) exo1_red();
  exo2_grey();
  exo3_propagate();
  exo4_explore();
  exo5_linear();

}

