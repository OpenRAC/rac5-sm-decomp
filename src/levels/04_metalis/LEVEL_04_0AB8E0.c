/* LEVEL_04:0x0AB8E0 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0ABBB0(unsigned int);
extern char *func_0ABE68(int,unsigned int,unsigned int);
extern char *func_13E118(char *,char *,char *,unsigned int);
extern unsigned char D_20FDAA,D_20FDA9;
extern char D_337D60[],D_30F530[];
int func_0AB8E0(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0ABBB0(a)||!D_20FDAA)return 0;
 if(!D_20FDA9)return 1;
 name=func_0ABE68(2,a,b);
 ok=func_13E118(D_337D60,name,D_30F530,0x20800)!=0;
 if(ok)D_20FDA9=0;
 return ok;
}
