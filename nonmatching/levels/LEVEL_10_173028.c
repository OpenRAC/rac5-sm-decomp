/* USA LEVEL_10.REL:0x173028, 116-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 108 linked bytes; first differing word +0x20.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { char pad[0x48]; float *pose; } Owner;
typedef struct { Owner *owner; char pad[0xE0]; int index,value; float rate; } Obj;
typedef struct { float pose; int value; float rate; } Entry;
extern Entry D_0022A4E8[];
extern void func_07D188(Owner *,float,unsigned int);
void func_173028(Obj *o,int index,float time) {
    Entry *p;
    func_07D188(o->owner,time,index);
    o->index=index;
    p=D_0022A4E8+index;
    o->owner->pose[2]=p->pose;
    o->rate=p->rate;
    o->value=p->value;
}
