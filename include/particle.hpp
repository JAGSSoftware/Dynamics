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

/**
 * \file
 * \brief Declaration of Particle object.
 *
 * \copyright (c) 2016 José Alberto García Sánchez
 * \author Jose A. Garcia Sanchez
 * \date 27-12-2016
 */

#ifndef __PARTICLE_H__
#define __PARTICLE_H__
#include <point.h>

/**
 * \brief Declaration of Particle class.
 */
class Particle
{
private:
  Point position;   //!< Position of the particle
  Point velocity;   //!< Velocity of the particle

  /**
   * \brief Kinetic energy of the particle as temperature
   *
   * The temperature is in reduced units: \f$\tilde{T}=\frac{k_B T}{m}\f$
   *
   * The relation between velocity and temperature is:
   * \f[
   * \frac{1}{2}mv_{rms}^2 = \frac{3}{2}k_BT
   * \Rightarrow
   * v_{rms}^2 = \frac{3k_BT}{m} = \tilde{T}
   * \f]
   */
  double temperature;

  /**
   * \brief Set the initial velocity of the particle.
   *
   * From the reduced temperature \f$\tilde{T}\f$ it is calculated randomly
   * all of the components of the velocity, having as squared module the value
   * of the reduced temperature.
   *
   * In spherical coordinates, \f$0 \le \theta \le \pi, 0 \le \phi \le 2\pi \f$ are generated
   * randomly, keeping the radius of the sphere constant (with value \f$r = \sqrt{\tilde{T}}\f$)
   */
  void initializeVelocity();

public:
  /**
   * \param[in] initial Initial position of the Particle.
   * \param[in] temperature Reduced temperature of the particle.
   */
  Particle(const Point initial, const double temperature);
  ~Particle();

  /**
   * \brief Moves the particle the time passed as argument.
   *
   * The particule is moved from its position at its velocity during timeLapse time.
   * \param[in] timeLapse Lapse of time to move the particle.
   */
  void move(const double timeLapse);

  Point getPosition();
  Point getVelocity();
};

#endif
