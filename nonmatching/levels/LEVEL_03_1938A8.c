/* USA LEVEL_03.REL:0x1938A8, 116-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 104 linked bytes; first differing word +0x20.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
void *func_1938A8(char *o,int kind,unsigned int index)
{
 char *d=*(char **)(o+0x54);void *result=0;
 if(kind==1)goto one;
 if(kind==0)goto zero;
 if(kind==2)goto two;
 if(kind==3)goto three;
 return result;
 zero:return *(void **)(d+0x50+index*4);
 one:return *(void **)(d+0x54+index*4);
 two:return *(void **)(d+0x5c+index*4);
 three:return *(void **)(d+0x64+index*4);
}
