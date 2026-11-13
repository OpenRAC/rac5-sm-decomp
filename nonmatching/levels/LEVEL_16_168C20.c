/* USA LEVEL_16.REL:0x168C20, 116-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x8.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
unsigned int func_168C20(char *o)
{
 unsigned char i=*(unsigned char *)(*(char **)(o+0x58)+0x6a);
 int *d=*(int **)(o+0x54);
 i=i==5?0:i+1;
 d+=2;
 while(!d[i]) i=i==5?0:i+1;
 return i;
}
