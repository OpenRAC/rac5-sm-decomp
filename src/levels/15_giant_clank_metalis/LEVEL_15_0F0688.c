/* LEVEL_15.REL:0x0F0688 -- conditional reset of a global record.
   The float field is set to 1.0f, the three int fields to 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_269040;

void func_0F0688(void *p, int id)
{
    if (id == 0xFFFF && p != 0) {
        D_269040.f00 = 0;
        D_269040.f0C = 1.0f;
        D_269040.f08 = 0;
        D_269040.f04 = 0;
    }
}
