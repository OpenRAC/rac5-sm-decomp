/* USA LEVEL_04.REL:0x1D5D00, 96-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 96 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
void func_1D5D00(char *o,void *value)
{
 unsigned char *d=*(unsigned char **)(o+0x58);
 unsigned int i=0;
 void **a,**p;
 if(d[0x47]){
  a=*(void ***)(o+0x54);p=a;
  do {if(*p==value){d[0x47]--;*p=a[d[0x47]];return;}i++;p++;}while(i<d[0x47]);
 }
}
