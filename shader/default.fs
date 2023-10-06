#version 100
precision mediump float;

varying vec2 TexCoord;

uniform sampler2D theTexture;

void main() {
    gl_FragColor = texture2D(theTexture, TexCoord);
}

