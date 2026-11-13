/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A69A0(unsigned int);
extern char *func_0A6C58(int,unsigned int,unsigned int);
extern char *func_131C98(char *,char *,char *,unsigned int);
extern unsigned char D_1F68EA,D_1F68E9;
extern char D_31D560[],D_2F4D30[];
int func_0A66D0(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A69A0(a)||!D_1F68EA)return 0;
 if(!D_1F68E9)return 1;
 name=func_0A6C58(2,a,b);
 ok=func_131C98(D_31D560,name,D_2F4D30,0x20800)!=0;
 if(ok)D_1F68E9=0;
 return ok;
}
