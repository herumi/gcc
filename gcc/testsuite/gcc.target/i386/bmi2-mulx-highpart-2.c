/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2 -mbmi2" } */
/* { dg-final { check-function-bodies "**" "" "" { target *-*-linux* *-*-gnu* } } } */

/*
**div7loop:
**...
**	mulx	%rsi, %rax, %rdx
**...
*/

unsigned int
div7loop (unsigned int x)
{
  for (int i = 0; i < 10000; i++) {
    x ^= (i ^ x) / 7;
  }
  return x;
}
