/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001DDDAC;
extern unsigned int D_00217004;
extern int func_029258(unsigned int);
extern void func_0B4300(int);
void func_049AF0(int amount) {
 if(func_029258(6)) *(unsigned int *)(D_001DDDAC+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001DDDAC+0x1C68)+=amount;
 func_0B4300(90);
 D_00217004+=amount;
 if(*(unsigned int *)(D_001DDDAC+0x1C68)>99999999) *(unsigned int *)(D_001DDDAC+0x1C68)=99999999;
}
