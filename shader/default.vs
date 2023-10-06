#version 100
attribute vec4 vPosition;
attribute vec2 vTexture;

varying vec2 TexCoord;

void main() {
    gl_Position = vPosition;
    TexCoord = vTexture;
}
