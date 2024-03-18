project(
    'SAT',
    'cpp',
    default_options: [
        'cpp_std=c++20',
        'buildtype=debug',
    ],
)

## dependencies come first
dependencies = [dependency('sdl3'), dependency('sdl3-image')]

compiler = meson.get_compiler('cpp')

compilerflags = ['-Wno-return-type']
compilerflags = compiler.get_supported_arguments(compilerflags)
add_global_arguments(compilerflags, language : 'cpp')


source = [
    'src/SAT.cpp',
    'src/Collider.cpp',
    'src/Drawing.cpp',
]

pch = 'src/PCH.hpp'

executable(
    'SAT',
    sources: source,
    dependencies: dependencies,
    cpp_pch: pch,
)