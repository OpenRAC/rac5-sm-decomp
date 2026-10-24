/* LEVEL_24:011A38 -- one call with the constant 62.831852f, 20.0f and the
   float living at D_001FB468, aimed at the object at D_001FB4A0. */
extern float D_001FB468;
extern char D_001FB4A0[];

void func_117608(char *dst, float a, float b, float c);

void func_011A38(void)
{
    func_117608(D_001FB4A0, 62.831852f, 20.0f, D_001FB468);
}
