/* Byte-exact isolated candidate, semantic hold. Reconcile the accepted current-level wrapper return contract and retain its object pin. */
/* Semantic hold: accepted func_167B38 is void although this caller consumes its
 * forwarded integer result. Reconcile that wrapper and its callers first. */
extern float D_00279E98[];
extern int func_167B38(void);
extern int func_21D758(float *, int, int, float);
extern int func_028C78(void);
extern void func_167280(int, unsigned int);
void func_21D820(int argument, float scale)
{
    int amount = func_21D758(D_00279E98, 3, func_167B38(), scale);
    func_167280(argument, (unsigned int)amount * (unsigned int)func_028C78());
}
