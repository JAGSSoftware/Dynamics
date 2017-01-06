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
 * \brief Implementation of the functionality of Particle.
 *
 * \author Jose A. Garcia Sanchez
 * \date 27-12-2016
 */

#include <particle.hpp>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <constants.h>

Particle::Particle(const Point position, const double temperature)
{
  this->position = position;
  this->temperature = temperature;
  initializeVelocity();
}

Particle::~Particle()
{
  // Empty body
}

void Particle::initializeVelocity()
{
  time_t t;
  srand((unsigned) time(&t));

  // To set the initial velocity, its module is proportional to
  // the temperature, but the angles of the components are random.
  const double module = sqrt(temperature);
  const double theta = (rand() * PI / RAND_MAX);
  const double phi = (rand() * 2. * PI / RAND_MAX);

  // Mapping between cartesian and spherical coordinates
  velocity.x = module * sin(theta) * cos(phi);
  velocity.y = module * sin(theta) * sin(phi);
  velocity.z = module * cos(theta);
}

Point Particle::getPosition()
{
  return this->position;
}

Point Particle::getVelocity()
{
  return this->velocity;
}

void Particle::move(const double timeLapse)
{
  this->position.x += this->velocity.x * timeLapse;
  this->position.y += this->velocity.y * timeLapse;
  this->position.z += this->velocity.z * timeLapse;
}
