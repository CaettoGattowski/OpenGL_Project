This is an openGL project where i showcase a full series of commits that resolve around me learning about the openGL libraries of GLEW,GLFW and SDL, firstly how to set them up.
Secondly I use the rendering pipeling to create with shaders my first triangle and then set up the GLM openGL Maths Library to learn about the transformations of Translation, Rotation and Scaling.
I then used Interpolation and Indexed Draws with projections and I continued with the camera set up to be moved when keys are pressed but also control it with mouse movements adding in the end 
two triangles. Later I researched about texture and image loading where I added the textures of brick and dirt on the two triangles as show in picture 1. Afterwards I go on using Ambient Lighting
to dim a red coloured directional lighting to the two triangles as shown in picture 2.

Picture 1.
<img width="2247" height="951" alt="Texture Loaded Triangles" src="https://github.com/user-attachments/assets/270a27fc-4e97-4550-ae54-679d9eaa1d20" />


Picture 2.
<img width="2250" height="950" alt="Red Ambient Lighting with fade" src="https://github.com/user-attachments/assets/168b4436-6bbd-441b-9e30-751a7bc7dc42" />

I proceed in adding directional diffuse lightning as shown in the following pictures but with the difference that picture 3 has phong shading whereas picture 4 has flat shading.

Picture 3
<img width="2200" height="951" alt="Screenshot 2025-09-30 115240" src="https://github.com/user-attachments/assets/1d2579de-0b60-4b37-9aef-13bdb31db063" />

Picture 4
<img width="2247" height="946" alt="Screenshot 2025-09-30 115423" src="https://github.com/user-attachments/assets/2af5e1e2-735e-44e0-9434-7974d9d45150" />

Added Specular Lighting on both triangles one with dull one with shiny material as shown in picture 5.

Picture 5
<img width="2247" height="950" alt="Screenshot 2025-09-30 175035" src="https://github.com/user-attachments/assets/a03b9a18-dec4-49b3-b837-54215ef9f663" />

Added two different point Lights, green and blue that shine on the two triangle pyramids and the floor as seen on picture 6. The shininess can be seen on picture 7.

Picture 6

<img width="795" height="592" alt="Screenshot 2025-10-27 155331" src="https://github.com/user-attachments/assets/047c4eac-560b-491a-b1aa-42fc2f79066d" />

Picture 7

<img width="789" height="576" alt="Screenshot 2025-10-27 155718" src="https://github.com/user-attachments/assets/54448fcd-5992-4248-8acb-f673e050a054" />

Added a flashlight camera based position and direction that changes depending the depth as shown in pictures 8 and 9.

Pciture 8

<img width="791" height="592" alt="Screenshot 2025-10-29 201104" src="https://github.com/user-attachments/assets/3555c552-5905-481d-a26b-02618b201d71" />


Picture 9


<img width="792" height="596" alt="Screenshot 2025-10-29 201115" src="https://github.com/user-attachments/assets/1f059341-dc35-47de-aee8-4216b86572bc" />


Added a model importer with proper memory allocation and saving whilst also importing textures for each model as shown in the pictures below.

Picture 10

<img width="794" height="595" alt="Screenshot 2025-11-03 181315" src="https://github.com/user-attachments/assets/0a85b06e-59a8-4a9c-87ad-413aeadb687a" />


Picture 11

<img width="791" height="592" alt="Screenshot 2025-11-03 181331" src="https://github.com/user-attachments/assets/0b8c2fe5-42a8-4625-b451-e47b309c949b" />

Added Directional Shadow Maps

Picture 12

<img width="1363" height="764" alt="Screenshot 2025-11-04 191229" src="https://github.com/user-attachments/assets/156e1d96-ed8d-4bda-88f7-20b8f9a9fd82" />

Added Omni Directional Shadow Maps

Picture 13


<img width="1352" height="761" alt="Screenshot 2025-11-04 220858" src="https://github.com/user-attachments/assets/f11f2003-07bf-4edb-a355-7ab057b3d92d" />

Added a Skybox with adjusted directional Light to imitate the sun

Picture 14


<img width="1361" height="764" alt="Screenshot 2025-11-04 232300" src="https://github.com/user-attachments/assets/81f11ac4-21f9-45a2-a3f6-8f8ab4954a2e" />

All in all these are the things i managed to learn and use correctly in this small scale project that could be also the start of a game engine:

How to create and manipulate windows

How to draw meshes/models

How to use Shaders

How to use Uniforms

How to use GLM to transform models

How to use Indexed Draws

How to use Projections

How to create and control a camera

How to map textures

How to use the Phong Lightning Model

How to implement Directional, Point and Spot Lights

How to import models

How to create and use Shadow Maps

How to implement a Skybox

