/*
 * Copyright (c) 2016 José Alberto García Sánchez
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*
 * \file
 * \brief Main application
 *
 * \author Jose A. Garcia Sanchez
 * \date 27-12-2016
 */

#include <stdio.h>
#include <particle.hpp>
#include <math.h>
#include <constants.h>

/**
 * \brief Returns the squared modulus of the point.
 *
 * \param[in] point
 * \return Squared modulus of the point
 */
double module(const Point point)
{
  return pow(point.x, 2.) + pow(point.y, 2.) + pow(point.z, 2.);
}

/**
 * \brief Main function, entry point of the program
 */
int main()
{
  const Point initialPosition = {.5, .5, .5};
  double temperature = .5;

  Particle particle = Particle(initialPosition, temperature);

  printf("Initial position: (%lf, %lf, %lf)\n", particle.getPosition().x, particle.getPosition().y, particle.getPosition().z);
  printf("Velocity: (%lf, %lf, %lf)[%lf]\n",
    particle.getVelocity().x,
    particle.getVelocity().y,
    particle.getVelocity().z,
    module(particle.getVelocity()));

  particle.move(1.);

  printf("Final position: (%lf, %lf, %lf)\n", particle.getPosition().x, particle.getPosition().y, particle.getPosition().z);

  printf("MAX(%d, %d): [%d]\n", 5,4,MAX(5,4));
  printf("MAX(%d, %d): [%d]\n", 4,5,MAX(4,5));

  return 0;
}
