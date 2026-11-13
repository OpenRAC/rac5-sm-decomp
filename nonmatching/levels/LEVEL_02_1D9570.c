/* USA LEVEL_02.REL:0x1D9570, 96-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 80 linked bytes; first differing word +0x8.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { void *value; char pad[12]; } Entry;
typedef struct { Entry entries[7]; unsigned char next,previous; } Table;
typedef struct { char pad[0x54]; Table *table; } Obj;
void *func_1D9570(void *arg) {
    Table *t=((Obj *)arg)->table;
    void *result=0;
    unsigned int i=0;
    while(!result) {
        unsigned int index,next;
        if(i>=7) break;
        index=t->next;next=t->next+1;
        result=t->entries[index].value;
        t->previous=index;
        t->next=next;
        if((unsigned char)next>=7) next=0;
        t->next=next;

        i++;
    }
    return result;
}
