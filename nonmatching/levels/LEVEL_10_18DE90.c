/* USA LEVEL_10.REL:0x18DE90, 192-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 192 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern char *func_018D08(void);
extern int func_084D08(void *,void *);
extern char *func_000F68(void);
extern void func_017978(int,int);
void func_18DE90(char *o)
{
 char *d=*(char **)(o+0x54),*s=*(char **)(o+0x58),*p,*end,*q;
 if(*(void **)(d+8)){
  char *id=func_018D08();if(!id)return;
  if(!func_084D08(*(void **)(d+8),id))return;
 }
 p=d+0x31;if(*(unsigned char *)(s+0x18))p=d+0x29;
 q=func_000F68();
 if(*(void **)(d+0x50)&&func_084D08(*(void **)(d+0x50),q+0x30))return;
 end=p+8;
 do {if(*(unsigned char *)p!=255)func_017978(*(unsigned char *)p,0);p++;}while(p<end);
}
