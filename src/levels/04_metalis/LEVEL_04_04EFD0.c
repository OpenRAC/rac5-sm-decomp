/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_0020D12C;
extern unsigned int D_0024A084;
extern int func_029E98(unsigned int);
extern void func_0BC858(int);
void func_04EFD0(int amount) {
 if(func_029E98(6)) *(unsigned int *)(D_0020D12C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_0020D12C+0x1C68)+=amount;
 func_0BC858(90);
 D_0024A084+=amount;
 if(*(unsigned int *)(D_0020D12C+0x1C68)>99999999) *(unsigned int *)(D_0020D12C+0x1C68)=99999999;
}
