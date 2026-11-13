/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001FCFAC;
extern unsigned int D_00238C84;
extern int func_02A1C8(unsigned int);
extern void func_0B82D0(int);
void func_04BCB8(int amount) {
 if(func_02A1C8(6)) *(unsigned int *)(D_001FCFAC+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001FCFAC+0x1C68)+=amount;
 func_0B82D0(90);
 D_00238C84+=amount;
 if(*(unsigned int *)(D_001FCFAC+0x1C68)>99999999) *(unsigned int *)(D_001FCFAC+0x1C68)=99999999;
}
