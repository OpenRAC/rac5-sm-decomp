/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_0015332C;
extern unsigned int D_00181484;
extern int func_024988(unsigned int);
extern void func_0A55A0(int);
void func_042EB0(int amount) {
 if(func_024988(6)) *(unsigned int *)(D_0015332C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_0015332C+0x1C68)+=amount;
 func_0A55A0(90);
 D_00181484+=amount;
 if(*(unsigned int *)(D_0015332C+0x1C68)>99999999) *(unsigned int *)(D_0015332C+0x1C68)=99999999;
}
