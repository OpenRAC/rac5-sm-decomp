/* LEVEL_10:0x1CE0F0 -- switches the object to state 2, clears its
   effect flag and runs the two follow-up handlers. */
typedef struct {
    char pad[0xC6];
    unsigned char flag;
} Sub;

typedef struct {
    char pad[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Sub *sub;
} Obj;

extern void func_07D188(Obj *obj, int mode, float t);
extern void func_12F2C8(int a0);

void func_1CE0F0(Obj *obj)
{
    obj->state = 2;
    obj->sub->flag = 0;
    func_07D188(obj, 3, 0.0f);
    func_12F2C8((int)obj);
}
