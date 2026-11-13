/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001E332C;
extern unsigned int D_0021B584;
extern int func_029068(unsigned int);
extern void func_0B55F8(int);
void func_04B240(int amount) {
 if(func_029068(6)) *(unsigned int *)(D_001E332C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001E332C+0x1C68)+=amount;
 func_0B55F8(90);
 D_0021B584+=amount;
 if(*(unsigned int *)(D_001E332C+0x1C68)>99999999) *(unsigned int *)(D_001E332C+0x1C68)=99999999;
}
