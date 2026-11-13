/* USA LEVEL_10.REL:0x1A6C30, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial -fno-gcse: 152 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { float x[16]; } Matrix;
typedef struct { char pad[4]; Matrix first,second; } Data;
typedef struct { char pad[0x58]; Data *data; } Obj;
void func_1A6C30(Obj *o,int first,Matrix *dst) {
 Matrix *p;
 if(first) {p=&o->data->first; dst->x[8]=p->x[8];dst->x[9]=p->x[9];dst->x[10]=p->x[10];dst->x[11]=p->x[11];}
 else {p=&o->data->second;dst->x[8]=p->x[8];dst->x[9]=p->x[9];dst->x[10]=p->x[10];dst->x[11]=p->x[11];}
 dst->x[0]=p->x[0];dst->x[1]=p->x[1];dst->x[2]=p->x[2];dst->x[3]=p->x[3];
 dst->x[4]=p->x[4];dst->x[5]=p->x[5];dst->x[6]=p->x[6];dst->x[7]=p->x[7];
 dst->x[12]=p->x[12];dst->x[13]=p->x[13];dst->x[14]=p->x[14];dst->x[15]=p->x[15];
}
