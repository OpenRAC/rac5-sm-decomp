/* LEVEL_24:0x0C1F50 -- placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_002F7C50[];
extern char *D_001D1880;
extern char *D_001D1884;
extern char *D_001D1888;
extern unsigned char D_001D1890;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_127FB0(int id);
extern int func_129220(void);
extern void func_12B178(struct Obj *o);
extern void func_12B1C8(struct Obj *o, int a);

void func_0C1F50(struct Obj *o)
{
    func_12B178(o);
    sprintf(D_002F7C50, func_127FB0(0xA88), func_129220(), func_129220());
    D_001D1880 = D_002F7C50;
    D_001D1884 = func_127FB0(0x327);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 0;
    func_12B1C8(o, 0x18);
}
