/* USA LEVEL_01.REL:0x1D1448, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 196 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char bytes[0xD0]; unsigned char active; char pad[3]; int value; } State;
extern State D_00398A60;
extern char D_00209030[];
extern char D_0022A8D0[];
extern void func_1D1080(char *,long long);
extern void func_06DF88(char *);
extern void func_06E400(char *);
extern void func_1D10D0(char *,char *,int,char *,int);
void func_1D1448(void) {
 char *p,*q,*end;
 if(!D_00398A60.active) return;
 p=D_00398A60.bytes;q=D_00209030;end=p+0xD0;
 do {
  func_1D1080(p,D_00398A60.value);
  func_06DF88(p);
  switch(p[0x30]) {case 3: func_06E400(p);func_1D10D0(p,q,D_00398A60.value,D_0022A8D0,3);break;}
  p+=0x68;q+=0x44;
 } while(p<end);
}
