extern float fabsf(float value);

float func_067F78(float position, float velocity, float bound,
                  float factor, float step)
{
    position = position + factor * velocity;
    bound = bound * fabsf(velocity);
    if (position < 0.0f) {
        bound = -bound;
        if (position < bound) {
            position = position + step;
            if (bound < position)
                position = bound;
        }
    } else if (bound < position) {
        position = position - step;
        if (position < bound)
            position = bound;
    }
    return position;
}
