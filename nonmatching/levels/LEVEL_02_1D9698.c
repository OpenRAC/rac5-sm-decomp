/* USA LEVEL_02.REL:0x1D9698, 128-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 128 linked bytes; first differing word +0x20.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern char D_24C650[];
extern void func_01AB40(char *),func_01AB80(char *);
void func_1D9698(void *o,unsigned int selector)
{
 char *s;char *d=*(char **)((char *)o+0x54);
 selector &=255;
 if(selector==255 || !(s=*(char **)(d+selector*16)) || (*(unsigned int *)(s+0x64)&0x20)){
  s=D_24C650;func_01AB40(s+0x30);func_01AB80(s);
 }else {func_01AB40(s+0x30);func_01AB80(s);}
}
