#include <iostream>

int main()
{
    // Image
    const int image_width = 256;
    const int image_height = 256;

    // Render
    std::cout << "P3\n"
              << image_width << ' ' << image_height << "\n255\n";

    for (int i = image_height - 1; i >= 0; i--)
    {
        for (int j = 0; j < image_width; j++)
        {
            std::cerr << "\rScalines remaining" << j << ' ' << std::flush;

            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 0.25;

            int ir = static_cast<int>(255.99 * r);
            int ig = static_cast<int>(255.99 * g);
            int ib = static_cast<int>(255.99 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::cerr << "\nDone.\n";
}