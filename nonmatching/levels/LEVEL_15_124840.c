/* USA LEVEL_15.REL:0x124840, 112-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 112 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef void (*Callback)(void);
extern void func_1243A0(void);
extern void func_124070(void);
extern void func_07A808(unsigned int *,unsigned int,Callback,int,int,int,Callback);
extern int func_07A9E0(unsigned int *);
int func_124840(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f) {
 unsigned int record[4];
 unsigned int flags=(a<<27)|(b<<16)|(c<<15)|(d<<14)|((e<<10)|0x3000)|(f<<6);
 func_07A808(record,flags,func_1243A0,32,0,-1,func_124070);
 return func_07A9E0(record);
}
