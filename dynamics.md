\mainpage Dynamics
<!--
Copyright (c) 2016 José Alberto García Sánchez

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
-->
\author José Alberto García Sánchez
\copyright (c) 2016 José Alberto García Sánchez

This is the implementation of the simple dynamic of a particle in a 3d
geometrical inertial space, i.e. under no forces. The position is set in a random point in
the space, and the initial velocity is calculated from Temperature, setting
randomly the coordinates for the velocity in the space.

The relation between Temperature \f$T\f$ and velocity \f$v\f$ is through
the expression:

\f[
E_k = \frac{1}{2}mv^2=\frac{3}{2}k_BT \rightarrow  v^2 = \frac{3k_B}{m}T
\f]

To set the coordinates of the velocity, spherical coordinates are used:
\f[
\array{
v_x = |v| \sin{\theta} \cos{\phi}
\cr
v_y = |v| \sin{\theta} \sin{\phi}
\cr
v_z = |v| \cos{\theta}
}
\f]

where \f$ |v| = \sqrt{T}, 0 \le \theta \le \pi \f$ and \f$ 0 \le \phi \le 2\pi \f$,
\f$ \theta \f$ and \f$ \phi \f$ are taken randomly.
