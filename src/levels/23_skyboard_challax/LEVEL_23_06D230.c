/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001C947C;
extern int D_001C9480;
extern int D_001C9484;
extern int D_001C9488;
extern u32 D_00269238;
extern u32 D_0026922C;
extern u32 D_0026923C;

extern int func_0FCCA0(u32 mode);

void func_06D230(void)
{
    if (D_001C947C == -1)
        D_001C947C = func_0FCCA0((D_00269238 << 16) | 0xB8003045u);
    if (D_001C9480 == -1)
        D_001C9480 = func_0FCCA0((D_00269238 << 16) | 0xB00030C5u);
    if (D_001C9484 == -1)
        D_001C9484 = func_0FCCA0((D_0026922C << 16) | 0xB00030C5u);
    if (D_001C9488 == -1)
        D_001C9488 = func_0FCCA0((D_0026923C << 16) | 0xB8003045u);
}
