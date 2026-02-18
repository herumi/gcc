/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2 -mno-bmi2" } */
/* { dg-final { check-function-bodies "**" "" "" { target *-*-linux* *-*-gnu* } } } */

/*
**div7:
**	movabsq	\$2635249153617166336, %rcx
**	movl	%edi, %eax
**	mulq	%rcx
**	movl	%edx, %eax
**	ret
**...
*/

unsigned int
div7 (unsigned int x)
{
  return x / 7;
}