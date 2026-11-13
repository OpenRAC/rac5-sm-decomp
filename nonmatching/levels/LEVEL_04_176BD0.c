/* USA LEVEL_04.REL:0x176BD0, 192-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 192 linked bytes; first differing word +0x70.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern int func_034278(char *,void *);
extern int func_033D10(char *);
extern void func_176918(char *,int);
extern void func_080188(char *,int,int,int,float,float);
extern void func_033E88(char *,int);
extern float D_00244298;
void func_176BD0(char *o,void *arg) {
 unsigned char *s=*(unsigned char **)(o+0x58);int n;
 if(s[0x164]) {
  if(!func_034278(o,arg)) func_176918(o,0);
 } else {
  n=func_033D10(o);
  if(n==0) func_176918(o,0);
  else if(n==1){float time=D_00244298;s[0x10C]=2;func_080188(o,2,0,1,time,0.0f);func_033E88(o,1);s[0x164]=n;}
 }
}
