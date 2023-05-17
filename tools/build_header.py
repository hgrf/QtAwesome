import json

if __name__ == "__main__":
    data = json.load(open("materialdesignicons6-webfont-charmap.json"))

    with open("../QtAwesome/QtAwesomeMdi6.h", "w") as f:
        f.write("#pragma once\n")
        f.write("namespace fa {\n")
        f.write("enum mdi6_icons : uint32_t {\n")

        for k, v in data.items():
            f.write("    mdi6_{} = {},\n".format(k.replace("-", "_"), v))

        f.write("};\n")
        f.write("}\n")
