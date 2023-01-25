#ifndef Vector2D_h
#define Vector2D_h

    class Vector2D
    {
        double x;
        double y;

    public:
        //insert methods here
        Vector2D();
        Vector2D(double x, double y);
        ~Vector2D();

        double getX();
        double getY();
        double getMagnitude();
        double getHeading();

        void normalize();
        // void add(Vector2D vec);
        // void cross(Vector2D vec);
        // void dot(Vector2D vec);
    };

#endif