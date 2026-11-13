/* LEVEL_09:0x0A3980 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A3C50(unsigned int);
extern char *func_0A3F08(int,unsigned int,unsigned int);
extern char *func_12AC30(char *,char *,char *,unsigned int);
extern unsigned char D_1E06EA,D_1E06E9;
extern char D_304CE0[],D_2DC4B0[];
int func_0A3980(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A3C50(a)||!D_1E06EA)return 0;
 if(!D_1E06E9)return 1;
 name=func_0A3F08(2,a,b);
 ok=func_12AC30(D_304CE0,name,D_2DC4B0,0x20800)!=0;
 if(ok)D_1E06E9=0;
 return ok;
}
