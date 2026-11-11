/* LEVEL_10:0x173850 -- configures the owner, then passes its info word and
   sub-record to the second helper. */
typedef struct {
    char pad[0x48];
    char *value;
} Info;

typedef struct {
    char pad[0x370];
    char sub[0x22C];
    Info *info;
} Owner;

typedef struct {
    int pad0;
    Owner *owner;
} Obj;

extern void func_069E08(Owner *owner, int a, int b, int c);
extern int func_08C178(char *owner, char *item);

void func_173850(Obj *obj)
{
    func_069E08(obj->owner, 14, 0xFFFF, 8);
    func_08C178(obj->owner->info->value, obj->owner->sub);
}
