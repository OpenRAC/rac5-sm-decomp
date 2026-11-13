/* USA LEVEL_16.REL:0x116538, 140-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 128 linked bytes; first differing word +0x8.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char name[32]; unsigned int id; char pad[4]; } Entry;
extern Entry D_002DFA80[4];
extern char *strcpy(char *,const char *);
int func_116538(unsigned int id,const char *name) {
    unsigned int i;
    Entry *p;
    p=D_002DFA80;
    for(i=0;i<4;i++,p++) if(p->id==id) return 0;
    p=D_002DFA80;
    for(i=0;i<4;i++,p++) {
        if(p->id==0) { p->id=id; strcpy(p->name,name); return 1; }
    }
    return 0;
}
