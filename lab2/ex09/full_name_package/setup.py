from setuptools import find_packages, setup

package_name = 'full_name_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
	('share/' + package_name + '/msg', ['msg/FullNameMessage.msg']),
        ('share/' + package_name + '/srv', ['srv/FullNameSumService.srv']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kirill',
    maintainer_email='skirill4202@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
