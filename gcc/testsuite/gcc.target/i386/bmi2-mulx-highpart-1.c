/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2 -mbmi2" } */
/* { dg-final { check-function-bodies "**" "" "" { target *-*-linux* *-*-gnu* } } } */

/*
**div7:
**	movabsq	\$2635249153617166336, %rax
**	movl	%edi, %edx
**	mulx	%rax, %rax, %rax
**	ret
**...
*/

unsigned int
div7 (unsigned int x)
{
  return x / 7;
}
